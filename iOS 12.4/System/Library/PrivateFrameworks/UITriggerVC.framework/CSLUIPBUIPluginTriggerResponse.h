/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CSLUIPBUIPluginTriggerResponse : PBCodable <NSCopying> {

	NSString* _errorString;
	BOOL _success;

}

@property (assign,nonatomic) BOOL success;                        //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorString; 
@property (nonatomic,retain) NSString * errorString;              //@synthesize errorString=_errorString - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)success;
-(NSString *)errorString;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setErrorString:(NSString *)arg1 ;
-(BOOL)hasErrorString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
