/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <TeaUI/TeaUI.TouchInsetsButton.h>

@interface TeaUI.DownloadButton : TeaUI.TouchInsetsButton {

	 handler;
	 delegate;
	 dataProvider;
	 imageTintColor;
	 progressTintColor;
	 trackTintColor;
	 downloadingImage;
	 notDownloadingImage;
	 progressBackgroundLayer;
	 progressLayer;
	 buttonState;
	 downloadProgressDisposable;
	 downloadStateDisposable;

}
-(void)startingButtonTappedWithSender:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
@end
