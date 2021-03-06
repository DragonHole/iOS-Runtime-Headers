/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexSet;

@interface _SSVPlayActivityFlushSessionInformation : NSObject {

	NSString* _endpointIdentifier;
	NSIndexSet* _revisionsIndexSet;
	NSString* _revisionVersionToken;
	unsigned long long _sessionToken;

}

@property (nonatomic,copy) NSString * endpointIdentifier;                  //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,retain) NSIndexSet * revisionsIndexSet;               //@synthesize revisionsIndexSet=_revisionsIndexSet - In the implementation block
@property (nonatomic,copy) NSString * revisionVersionToken;                //@synthesize revisionVersionToken=_revisionVersionToken - In the implementation block
@property (assign,nonatomic) unsigned long long sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
-(NSIndexSet *)revisionsIndexSet;
-(void)setRevisionVersionToken:(NSString *)arg1 ;
-(NSString *)revisionVersionToken;
-(void)setRevisionsIndexSet:(NSIndexSet *)arg1 ;
-(void)setSessionToken:(unsigned long long)arg1 ;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(NSString *)endpointIdentifier;
-(unsigned long long)sessionToken;
@end

