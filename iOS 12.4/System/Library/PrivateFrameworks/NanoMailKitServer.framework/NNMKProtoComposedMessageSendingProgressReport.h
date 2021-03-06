/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying> {

	NSString* _composedMessageId;
	int _progress;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasComposedMessageId; 
@property (nonatomic,retain) NSString * composedMessageId;              //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) BOOL hasProgress; 
@property (assign,nonatomic) int progress;                              //@synthesize progress=_progress - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(BOOL)hasComposedMessageId;
-(NSString *)composedMessageId;
-(void)setHasProgress:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(int)arg1 ;
-(int)progress;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasProgress;
@end

