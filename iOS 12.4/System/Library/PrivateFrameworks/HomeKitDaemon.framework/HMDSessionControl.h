/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMDSessionControl : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	unsigned long long _controlCommand;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) unsigned long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)controlCommand;
-(id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sessionID;
@end
