/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBrowserCell.h>

@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {

	UIImageView* _selectionOutline;
	IMBalloonPlugin* _plugin;
	UIImageView* _browserImage;

}

@property (nonatomic,retain) IMBalloonPlugin * plugin;                //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) UIImageView * browserImage;              //@synthesize browserImage=_browserImage - In the implementation block
+(id)reuseIdentifier;
-(id)iconView;
-(UIImageView *)browserImage;
-(void)setPlugin:(id)arg1 hideShinyStatus:(BOOL)arg2 ;
-(void)setBrowserImage:(UIImageView *)arg1 ;
-(void)_setImageForPlugin:(id)arg1 ;
-(void)_updateShinyStatus;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
@end

