/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>

@protocol SGSuggestionDelegate;
@class EMListUnsubscribeCommand, SGSuggestionPresenter, NSString;

@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory> {

	id<SGSuggestionDelegate> suggestionDelegate;
	EMListUnsubscribeCommand* _listUnsubscribeCommand;
	SGSuggestionPresenter* _suggestionPresenter;

}

@property (nonatomic,retain) EMListUnsubscribeCommand * listUnsubscribeCommand;               //@synthesize listUnsubscribeCommand=_listUnsubscribeCommand - In the implementation block
@property (assign,nonatomic,__weak) SGSuggestionPresenter * suggestionPresenter;              //@synthesize suggestionPresenter=_suggestionPresenter - In the implementation block
@property (nonatomic,readonly) id<SGSuggestion> suggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate; 
+(id)suggestionPrimaryActionString;
+(id)suggestionDismissActionTitle;
+(id)unsubscribeTitleAlertString;
+(id)unsubscribeMessageAlertString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)ignore;
-(id<SGSuggestion>)suggestion;
-(id)suggestionPrimaryAction;
-(/*^block*/id)suggestionComparator;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(id)suggestionCategoryTitle;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(id)suggestionDismissAction;
-(id)suggestionCategory;
-(id)suggestionTitle;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(void)unsubscribe;
-(EMListUnsubscribeCommand *)listUnsubscribeCommand;
-(SGSuggestionPresenter *)suggestionPresenter;
-(void)setListUnsubscribeCommand:(EMListUnsubscribeCommand *)arg1 ;
-(void)setSuggestionPresenter:(SGSuggestionPresenter *)arg1 ;
@end

