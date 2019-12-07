/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindowScene;

@interface UISceneSizeRestrictions : NSObject {

	BOOL _hasAutomaticMinimumSize;
	BOOL _hasAutomaticMaximumSize;
	UIWindowScene* _scene;
	CGSize _minimumSize;
	CGSize _maximumSize;

}

@property (assign,nonatomic) CGSize minimumSize;              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;              //@synthesize maximumSize=_maximumSize - In the implementation block
-(CGSize)minimumSize;
-(CGSize)maximumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(id)_initWithScene:(id)arg1 ;
@end
