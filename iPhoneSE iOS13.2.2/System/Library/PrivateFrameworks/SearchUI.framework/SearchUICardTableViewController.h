/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITableViewController.h>

@protocol SearchUICardViewDelegate;
@class SFCard;

@interface SearchUICardTableViewController : SearchUITableViewController {

	id<SearchUICardViewDelegate> _cardViewDelegate;
	SFCard* _card;

}

@property (assign,nonatomic,__weak) id<SearchUICardViewDelegate> cardViewDelegate;              //@synthesize cardViewDelegate=_cardViewDelegate - In the implementation block
@property (nonatomic,retain) SFCard * card;                                                     //@synthesize card=_card - In the implementation block
-(id)init;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(SFCard *)card;
-(void)setCard:(SFCard *)arg1 ;
-(void)setTableModel:(id)arg1 ;
-(id<SearchUICardViewDelegate>)cardViewDelegate;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)showViewController:(id)arg1 ;
-(BOOL)shouldDrawTopAndBottomSeparators;
-(double)offScreenContentScrollDistance;
-(void)setCardViewDelegate:(id<SearchUICardViewDelegate>)arg1 ;
@end

