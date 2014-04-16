//
//  GKBar.h
//  GraphKit
//
//  Created by Michal Konturek on 16/04/2014.
//  Copyright (c) 2014 Michal Konturek. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GKBar : UIView

+ (instancetype)create;
+ (instancetype)createWithFrame:(CGRect)frame;

@property (nonatomic, assign) CGFloat percentage;
@property (nonatomic, strong) UIColor *foregroundColor;
@property (nonatomic, assign) BOOL animated;

- (void)setPercentage:(CGFloat)percentage animated:(BOOL)animated;

- (void)reset;

@end