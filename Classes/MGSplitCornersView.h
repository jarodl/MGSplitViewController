//
//  MGSplitCornersView.h
//  MGSplitView
//
//  Created by Matt Gemmell on 28/07/2010.
//  Copyright 2010 Instinctive Code.
//

#import <UIKit/UIKit.h>

double deg2Rad(double degrees);
double rad2Deg(double radians);

typedef enum _MGCornersPosition {
	MGCornersPositionLeadingVertical	= 0, // top of screen for a left/right split.
	MGCornersPositionTrailingVertical	= 1, // bottom of screen for a left/right split.
	MGCornersPositionLeadingHorizontal	= 2, // left of screen for a top/bottom split.
	MGCornersPositionTrailingHorizontal	= 3  // right of screen for a top/bottom split.
} MGCornersPosition;

@class MGSplitViewController;
@interface MGSplitCornersView : UIView {
	float cornerRadius;
	__weak MGSplitViewController *splitViewController;
	MGCornersPosition cornersPosition;
	__strong UIColor *cornerBackgroundColor;
}

@property (nonatomic) float cornerRadius;
@property (weak, nonatomic) MGSplitViewController *splitViewController; // weak ref.
@property (nonatomic) MGCornersPosition cornersPosition; // don't change this manually; let the splitViewController manage it.
@property (strong, nonatomic) UIColor *cornerBackgroundColor;

@end
