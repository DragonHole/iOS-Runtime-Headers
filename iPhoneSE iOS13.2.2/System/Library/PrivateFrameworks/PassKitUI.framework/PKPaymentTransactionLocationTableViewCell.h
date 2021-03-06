/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKTransactionMapView, UIImageView, PKPaymentTransaction;

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {

	UILabel* _titleLabel;
	PKTransactionMapView* _mapView;
	UIImageView* _disclosureView;
	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL usesDarkMapAppearance; 
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_disclosureView;
-(void)setTitleLabelColor:(id)arg1 ;
-(BOOL)_shouldShowDisclosureIndicator;
-(BOOL)usesDarkMapAppearance;
-(void)setUsesDarkMapAppearance:(BOOL)arg1 ;
@end

