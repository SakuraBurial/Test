//
//  Person.h
//  test
//
//  Created by 陈建辉 on 15/6/26.
//  Copyright (c) 2015年 Sakura. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * age;

@end
