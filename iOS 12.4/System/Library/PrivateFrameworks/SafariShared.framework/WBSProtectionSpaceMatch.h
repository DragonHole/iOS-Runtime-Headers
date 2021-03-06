/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLProtectionSpace, NSDictionary, NSURLCredential;

@interface WBSProtectionSpaceMatch : NSObject {

	NSURLProtectionSpace* _protectionSpace;
	NSDictionary* _credentials;
	NSURLCredential* _defaultCredential;
	long long _matchLevel;

}

@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * credentials;                     //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,readonly) NSURLCredential * defaultCredential;                 //@synthesize defaultCredential=_defaultCredential - In the implementation block
@property (nonatomic,readonly) long long matchLevel;                                //@synthesize matchLevel=_matchLevel - In the implementation block
-(id)initWithProtectionSpace:(id)arg1 credentials:(id)arg2 defaultCredential:(id)arg3 matchLevel:(long long)arg4 ;
-(NSURLCredential *)defaultCredential;
-(long long)matchLevel;
-(NSDictionary *)credentials;
-(NSURLProtectionSpace *)protectionSpace;
@end

