//
//  MGSplitViewAppDelegate.h
//  MGSplitView
//
//  Created by Matt Gemmell on 26/07/2010.
//  Copyright Instinctive Code 2010.
//

#import <UIKit/UIKit.h>

@class RootViewController;
@class DetailViewController;
@class MGSplitViewController;

@interface MGSplitViewAppDelegate : NSObject <UIApplicationDelegate> {
    __strong UIWindow *window;
    __strong MGSplitViewController *splitViewController;
    __strong RootViewController *rootViewController;
    __strong DetailViewController *detailViewController;
}

@property (strong, nonatomic) IBOutlet UIWindow *window;

@property (strong) IBOutlet MGSplitViewController *splitViewController;
@property (strong) IBOutlet RootViewController *rootViewController;
@property (strong) IBOutlet DetailViewController *detailViewController;

@end
