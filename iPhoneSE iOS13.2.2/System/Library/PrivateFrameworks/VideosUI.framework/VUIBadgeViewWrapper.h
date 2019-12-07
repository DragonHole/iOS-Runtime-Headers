/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@class _TVImageView, IKViewElement, NSString;

@interface VUIBadgeViewWrapper : NSObject {

	_TVImageView* _badgeView;
	IKViewElement* _badgeElement;
	NSString* _badgeType;
	CGSize _badgeSize;
	CGRect _badgeFrame;

}

@property (nonatomic,retain) _TVImageView * badgeView;                  //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) IKViewElement * badgeElement;              //@synthesize badgeElement=_badgeElement - In the implementation block
@property (assign,nonatomic) CGSize badgeSize;                          //@synthesize badgeSize=_badgeSize - In the implementation block
@property (assign,nonatomic) CGRect badgeFrame;                         //@synthesize badgeFrame=_badgeFrame - In the implementation block
@property (nonatomic,retain) NSString * badgeType;                      //@synthesize badgeType=_badgeType - In the implementation block
-(CGRect)badgeFrame;
-(CGSize)badgeSize;
-(_TVImageView *)badgeView;
-(void)setBadgeView:(_TVImageView *)arg1 ;
-(void)setBadgeType:(NSString *)arg1 ;
-(NSString *)badgeType;
-(IKViewElement *)badgeElement;
-(void)setBadgeElement:(IKViewElement *)arg1 ;
-(void)setBadgeSize:(CGSize)arg1 ;
-(void)setBadgeFrame:(CGRect)arg1 ;
@end
