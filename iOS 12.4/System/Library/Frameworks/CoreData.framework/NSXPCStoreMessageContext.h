/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStore, NSCoreDataXPCMessage, NSDictionary, NSError;

@interface NSXPCStoreMessageContext : NSObject {

	NSXPCStore* _store;
	NSCoreDataXPCMessage* _message;
	NSDictionary* _result;
	NSError* _error;

}

@property (nonatomic,readonly) NSCoreDataXPCMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSXPCStore * store;                          //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSDictionary * result;                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
-(id)initForMessage:(id)arg1 store:(id)arg2 ;
-(NSXPCStore *)store;
-(void)setResult:(NSDictionary *)arg1 ;
-(void)dealloc;
-(NSCoreDataXPCMessage *)message;
-(NSDictionary *)result;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

