//
//  ToDoItem.h
//  ToDoList
//
//  Created by Tam Nguyen on 5/7/15.
//  Copyright (c) 2015 Tam Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
