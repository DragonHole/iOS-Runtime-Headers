/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUICoreContactPropertyFilterBuilder : NSObject {

	BOOL _excludeNickname;
	BOOL _excludePhoto;
	BOOL _excludeNote;
	BOOL _excludeRelationships;

}

@property (assign,nonatomic) BOOL excludeNickname;                   //@synthesize excludeNickname=_excludeNickname - In the implementation block
@property (assign,nonatomic) BOOL excludePhoto;                      //@synthesize excludePhoto=_excludePhoto - In the implementation block
@property (assign,nonatomic) BOOL excludeNote;                       //@synthesize excludeNote=_excludeNote - In the implementation block
@property (assign,nonatomic) BOOL excludeRelationships;              //@synthesize excludeRelationships=_excludeRelationships - In the implementation block
+(id)whitelistedContactsFilterBuilder;
+(id)managedContactsFilterBuilder;
-(id)build;
-(void)setExcludeNickname:(BOOL)arg1 ;
-(void)setExcludePhoto:(BOOL)arg1 ;
-(void)setExcludeNote:(BOOL)arg1 ;
-(void)setExcludeRelationships:(BOOL)arg1 ;
-(BOOL)excludeNickname;
-(BOOL)excludePhoto;
-(BOOL)excludeNote;
-(BOOL)excludeRelationships;
@end
