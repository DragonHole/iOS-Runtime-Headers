/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairHandshake : IDSSocketPairMessage {

	unsigned _versionNumber;

}

@property (nonatomic,readonly) unsigned versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
-(unsigned)versionNumber;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersionNumber:(unsigned)arg1 ;
-(unsigned char)command;
@end

