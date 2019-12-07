/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface STMSizeCacheEvent : NSObject {

	unsigned _flags;
	NSString* _path;
	unsigned long long _evtID;

}

@property (retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (assign) unsigned long long evtID;              //@synthesize evtID=_evtID - In the implementation block
@property (assign) unsigned flags;                        //@synthesize flags=_flags - In the implementation block
+(id)eventWithPath:(id)arg1 flags:(unsigned)arg2 event:(unsigned long long)arg3 ;
-(unsigned)flags;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)evtID;
-(void)setEvtID:(unsigned long long)arg1 ;
@end
