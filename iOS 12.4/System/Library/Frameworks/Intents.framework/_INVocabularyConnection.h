/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _INVocabularyConnection : NSObject {

	NSXPCConnection* _connection;
	id<INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)initialize;
-(id)settingsService;
-(void)_clearConnection;
-(id)_syncService;
-(id)_connection;
-(id)init;
-(void)dealloc;
@end

