/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CertInfoCertificateDetailsView;

@interface CertInfoTrustDetailsView : UIView {

	NSArray* _certificateViews;
	CertInfoCertificateDetailsView* _currentCertView;

}
-(id)initWithFrame:(CGRect)arg1 trustProperties:(id)arg2 ;
-(void)_appendRemainingCertificates;
-(void)layoutSubviews;
@end

