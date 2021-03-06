/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class UIWindow;

@interface _TVWindowSizeAdaptor : NSObject {

	unsigned long long _allowedInterfaceOrientations;
	UIWindow* _window;

}

@property (nonatomic,__weak,readonly) UIWindow * window;               //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) CGSize adjustedWindowSize; 
-(BOOL)update;
-(UIWindow *)window;
-(id)initWithWindow:(id)arg1 ;
-(unsigned long long)_supportedOrientations;
-(CGSize)adjustedWindowSize;
-(BOOL)_shouldSwapDimensions;
@end

