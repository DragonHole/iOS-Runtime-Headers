/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCProfileInfoCell.h>

@interface MCProfileDetailsCell : MCProfileInfoCell {

	unsigned long long _cellStyle;

}

@property (assign,nonatomic) unsigned long long cellStyle;              //@synthesize cellStyle=_cellStyle - In the implementation block
-(void)prepareForReuse;
-(void)setPayload:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)cellStyle;
-(void)setCellStyle:(unsigned long long)arg1 ;
-(id)_detailImage;
-(void)setManagedApp:(id)arg1 ;
-(void)setManagedBook:(id)arg1 ;
-(id)_textForLabel:(id)arg1 value:(id)arg2 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
-(BOOL)_containsTitleLabelOnly;
-(void)_setTitle:(id)arg1 subtitle1:(id)arg2 subtitle2:(id)arg3 nearExpiration:(BOOL)arg4 ;
-(id)_combineSubtitleAndApplyAttributeWithSubtitle1:(id)arg1 subtitle2:(id)arg2 font:(id)arg3 defaultColor:(id)arg4 expirationColor:(id)arg5 nearExpiration:(BOOL)arg6 ;
-(id)_attributedTextForSolitaryTitleLabel:(id)arg1 defaultColor:(id)arg2 ;
-(void)_setTitle:(id)arg1 subtitle1:(id)arg2 subtitle2:(id)arg3 ;
-(id)_imageForApplicationIdentifier:(id)arg1 ;
-(void)_setPayloadInfo:(id)arg1 ;
-(void)setUnmanagedEnterpriseApp:(id)arg1 ;
-(void)setPayloadInfo:(id)arg1 ;
@end

