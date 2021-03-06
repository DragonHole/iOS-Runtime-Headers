/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNGeminiChannel, NSArray;

@interface CNGeminiResult : NSObject <NSSecureCoding> {

	CNGeminiChannel* _channel;
	long long _usage;
	NSArray* _availableChannels;

}

@property (nonatomic,readonly) CNGeminiChannel * channel;                //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) long long usage;                          //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) NSArray * availableChannels;              //@synthesize availableChannels=_availableChannels - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithChannel:(id)arg1 usage:(long long)arg2 availableChannels:(id)arg3 ;
-(NSArray *)availableChannels;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)usage;
-(CNGeminiChannel *)channel;
@end

