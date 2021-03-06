/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSArray;

@interface UITextTapRecognizer : UITapGestureRecognizer {

	NSArray* _touchesForTap;

}

@property (nonatomic,retain) NSArray * touchesForTap;              //@synthesize touchesForTap=_touchesForTap - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)touchesForTap;
-(void)setTouchesForTap:(NSArray *)arg1 ;
@end

