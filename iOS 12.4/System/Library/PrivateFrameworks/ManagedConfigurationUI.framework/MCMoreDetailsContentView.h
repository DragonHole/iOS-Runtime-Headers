/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface MCMoreDetailsContentView : UIView {

	UILabel* _title;
	UILabel* _subtitle1;
	UILabel* _subtitle2;

}
-(id)_textForLabel:(id)arg1 value:(id)arg2 ;
-(void)setSubtitle1Text:(id)arg1 ;
-(void)setSubtitle2Text:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setPayload:(id)arg1 ;
-(void)setTitleText:(id)arg1 ;
@end

