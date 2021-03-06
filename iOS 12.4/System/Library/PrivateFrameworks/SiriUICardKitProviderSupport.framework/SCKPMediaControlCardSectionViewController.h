/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CRKCardSectionViewControlling.h>

@protocol CRKCardSectionViewControllingDelegate;
@class AFSecurityConnection, UIViewController, SFMediaRemoteControlCardSection, SCKPMediaControlCardSectionView, NSString;

@interface SCKPMediaControlCardSectionViewController : UIViewController <CRKCardSectionViewControlling> {

	AFSecurityConnection* _assistantSecurityConnection;
	UIViewController* _mediaPlatterViewController;
	id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
	SFMediaRemoteControlCardSection* _cardSection;

}

@property (readonly) SFMediaRemoteControlCardSection * cardSection;                                                            //@synthesize cardSection=_cardSection - In the implementation block
@property (readonly) SCKPMediaControlCardSectionView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; 
+(void)initialize;
-(SFMediaRemoteControlCardSection *)cardSection;
-(void)setCardSectionViewControllingDelegate:(id<CRKCardSectionViewControllingDelegate>)arg1 ;
-(id<CRKCardSectionViewControllingDelegate>)cardSectionViewControllingDelegate;
-(void)_updatePlatterForHashedRouteUID:(id)arg1 ;
-(void)_updatePlatterForRouteUID:(id)arg1 ;
-(id)initWithMediaRemoteControlCardSection:(id)arg1 ;
-(void)loadView;
@end

