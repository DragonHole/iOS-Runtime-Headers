/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject {

	CSSearchableIndex* _searchableIndex;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CSSearchableIndex *)searchableIndex;
-(void)deleteInteractionsWithChatGUIDs:(id)arg1 ;
-(void)deleteInteractionsWithMessageGUIDs:(id)arg1 ;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
@end

