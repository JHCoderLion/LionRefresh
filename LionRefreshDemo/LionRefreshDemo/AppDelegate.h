//
//  AppDelegate.h
//  LionRefreshDemo
//
//  Created by 赖锦浩 on 2016/12/14.
//  Copyright © 2016年 会跳舞的狮子. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

