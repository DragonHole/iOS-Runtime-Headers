/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, SKUIColorScheme, SKUIProductPageTableExpandableHeaderView, NSArray, NSNumberFormatter;

@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUIProductPageTableExpandableHeaderView* _headerView;
	NSArray* _inAppPurchases;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2 ;
-(void)_reloadHeaderView;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
@end

