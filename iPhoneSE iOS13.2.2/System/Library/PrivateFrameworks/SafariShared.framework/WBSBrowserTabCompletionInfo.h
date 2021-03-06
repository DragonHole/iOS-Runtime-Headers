/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSURL, NSString;

@interface WBSBrowserTabCompletionInfo : NSObject {

	NSUUID* _uuid;
	NSUUID* _windowUUID;
	unsigned long long _tabIndex;
	NSURL* _url;
	NSString* _title;

}

@property (nonatomic,readonly) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * windowUUID;                      //@synthesize windowUUID=_windowUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long tabIndex;              //@synthesize tabIndex=_tabIndex - In the implementation block
@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
-(NSURL *)url;
-(NSUUID *)uuid;
-(NSString *)title;
-(unsigned long long)tabIndex;
-(NSUUID *)windowUUID;
-(id)initWithUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 url:(id)arg4 title:(id)arg5 ;
@end

