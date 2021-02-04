/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMasterKeyIndex : NSObject <NSCopying> {

	unsigned char _MKI[16];
	unsigned _activeSize;
	BOOL _isMapped;
	unsigned char _mapKey;

}

@property (readonly) unsigned activeSize; 
@property (readonly) BOOL isMapped; 
@property (readonly) unsigned char mapKey; 
+(id)newMKIWithBytes:(char*)arg1 bufferSize:(unsigned)arg2 ;
+(id)makeInvalidKey;
-(void)setMapKey:(unsigned char)arg1 ;
-(id)initWithBytes:(char*)arg1 bufferSize:(unsigned)arg2 ;
-(BOOL)isMapped;
-(unsigned char)mapKey;
-(unsigned)activeSize;
-(const char*)MKI;
-(void)setActiveSize:(unsigned)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
-(void)fullKeyBytes:(unsigned char)arg1 ;
-(unsigned)mappedKeySize;
-(unsigned)mappedKeyBytes:(char*)arg1 size:(unsigned)arg2 ;
-(BOOL)setMapping:(unsigned char)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(id)initWithUUID:(unsigned char)arg1 ;
@end
