/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDConversationRemoteStorage <NSObject>
@required
-(BOOL)synchronize;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1;
-(void)setDictionary:(id)arg1 forKey:(id)arg2;
-(void)refresh;
-(BOOL)isInitialized;
-(void)removeDictionaryForKey:(id)arg1;
-(id)storageName;

@end

