/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol SKUISettingsDocumentViewDelegate;
@interface SKUISettingsDocumentView : UIView {

	id<SKUISettingsDocumentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsDocumentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUISettingsDocumentViewDelegate>)arg1 ;
-(id<SKUISettingsDocumentViewDelegate>)delegate;
-(void)tintColorDidChange;
@end

