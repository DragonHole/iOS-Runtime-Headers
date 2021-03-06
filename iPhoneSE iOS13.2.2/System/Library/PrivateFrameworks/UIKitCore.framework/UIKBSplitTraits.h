/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBSplitTraits : NSObject {

	unsigned long long _corners;
	CGRect _leftFrame;
	CGRect _rightFrame;

}

@property (nonatomic,readonly) CGRect leftFrame;                        //@synthesize leftFrame=_leftFrame - In the implementation block
@property (nonatomic,readonly) CGRect rightFrame;                       //@synthesize rightFrame=_rightFrame - In the implementation block
@property (nonatomic,readonly) unsigned long long corners;              //@synthesize corners=_corners - In the implementation block
+(id)traitsWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(unsigned long long)arg3 ;
-(unsigned long long)corners;
-(CGRect)leftFrame;
-(CGRect)rightFrame;
-(id)initWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(unsigned long long)arg3 ;
@end

