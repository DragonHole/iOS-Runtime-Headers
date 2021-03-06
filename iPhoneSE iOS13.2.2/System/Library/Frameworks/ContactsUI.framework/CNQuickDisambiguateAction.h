/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@class NSOrderedSet, CNQuickAction;

@interface CNQuickDisambiguateAction : CNQuickPropertyAction {

	BOOL _ignoreMainAction;
	NSOrderedSet* _actions;
	CNQuickAction* _mainAction;

}

@property (nonatomic,retain) NSOrderedSet * actions;                         //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic,__weak) CNQuickAction * mainAction;              //@synthesize mainAction=_mainAction - In the implementation block
@property (assign,nonatomic) BOOL ignoreMainAction;                          //@synthesize ignoreMainAction=_ignoreMainAction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithActions:(id)arg1 ;
-(NSOrderedSet *)actions;
-(void)setActions:(NSOrderedSet *)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(CNQuickAction *)mainAction;
-(void)setMainAction:(CNQuickAction *)arg1 ;
-(BOOL)ignoreMainAction;
-(void)setIgnoreMainAction:(BOOL)arg1 ;
@end

