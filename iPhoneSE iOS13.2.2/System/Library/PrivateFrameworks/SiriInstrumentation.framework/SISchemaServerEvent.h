/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SISchemaServerEvent.h>
@class SISchemaServerEventMetadata, SISchemaUserSpeechDuration, SISchemaConversationTrace, SISchemaTurnInteraction, SISchemaSpeechResultSelected, SISchemaDeviceFixedContext, NSData;


@protocol SISchemaServerEvent <NSObject>
@property (nonatomic,retain) SISchemaServerEventMetadata * eventMetadata; 
@property (nonatomic,retain) SISchemaUserSpeechDuration * userSpeechDuration; 
@property (nonatomic,retain) SISchemaConversationTrace * serverConversationTrace; 
@property (nonatomic,retain) SISchemaTurnInteraction * turnInteraction; 
@property (nonatomic,retain) SISchemaSpeechResultSelected * speechResultSelected; 
@property (nonatomic,retain) SISchemaDeviceFixedContext * serverDeviceFixedContext; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type; 
@required
+(Class)getEventTypeClassForTag:(int)arg1;
+(id)getTagForEventTypeClass:(Class)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setEventType:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(SISchemaServerEventMetadata *)eventMetadata;
-(void)setEventMetadata:(id)arg1;
-(void)setUserSpeechDuration:(id)arg1;
-(void)setServerConversationTrace:(id)arg1;
-(void)setTurnInteraction:(id)arg1;
-(void)setSpeechResultSelected:(id)arg1;
-(void)setServerDeviceFixedContext:(id)arg1;
-(SISchemaUserSpeechDuration *)userSpeechDuration;
-(SISchemaConversationTrace *)serverConversationTrace;
-(SISchemaTurnInteraction *)turnInteraction;
-(SISchemaSpeechResultSelected *)speechResultSelected;
-(SISchemaDeviceFixedContext *)serverDeviceFixedContext;
-(unsigned long long)whichEvent_Type;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SISchemaServerEventMetadata, SISchemaUserSpeechDuration, SISchemaConversationTrace, SISchemaTurnInteraction, SISchemaSpeechResultSelected, SISchemaDeviceFixedContext, NSData, NSString;

@interface SISchemaServerEvent : PBCodable <SISchemaServerEvent, NSSecureCoding> {

	SISchemaServerEventMetadata* _eventMetadata;
	SISchemaUserSpeechDuration* _userSpeechDuration;
	SISchemaConversationTrace* _serverConversationTrace;
	SISchemaTurnInteraction* _turnInteraction;
	SISchemaSpeechResultSelected* _speechResultSelected;
	SISchemaDeviceFixedContext* _serverDeviceFixedContext;
	unsigned long long _whichEvent_Type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SISchemaServerEventMetadata * eventMetadata;                        //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (nonatomic,retain) SISchemaUserSpeechDuration * userSpeechDuration;                    //@synthesize userSpeechDuration=_userSpeechDuration - In the implementation block
@property (nonatomic,retain) SISchemaConversationTrace * serverConversationTrace;                //@synthesize serverConversationTrace=_serverConversationTrace - In the implementation block
@property (nonatomic,retain) SISchemaTurnInteraction * turnInteraction;                          //@synthesize turnInteraction=_turnInteraction - In the implementation block
@property (nonatomic,retain) SISchemaSpeechResultSelected * speechResultSelected;                //@synthesize speechResultSelected=_speechResultSelected - In the implementation block
@property (nonatomic,retain) SISchemaDeviceFixedContext * serverDeviceFixedContext;              //@synthesize serverDeviceFixedContext=_serverDeviceFixedContext - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                               //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
+(Class)getEventTypeClassForTag:(int)arg1 ;
+(id)getTagForEventTypeClass:(Class)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEventType:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaServerEventMetadata *)eventMetadata;
-(void)setEventMetadata:(SISchemaServerEventMetadata *)arg1 ;
-(void)setUserSpeechDuration:(SISchemaUserSpeechDuration *)arg1 ;
-(void)setServerConversationTrace:(SISchemaConversationTrace *)arg1 ;
-(void)setTurnInteraction:(SISchemaTurnInteraction *)arg1 ;
-(void)setSpeechResultSelected:(SISchemaSpeechResultSelected *)arg1 ;
-(void)setServerDeviceFixedContext:(SISchemaDeviceFixedContext *)arg1 ;
-(SISchemaUserSpeechDuration *)userSpeechDuration;
-(SISchemaConversationTrace *)serverConversationTrace;
-(SISchemaTurnInteraction *)turnInteraction;
-(SISchemaSpeechResultSelected *)speechResultSelected;
-(SISchemaDeviceFixedContext *)serverDeviceFixedContext;
-(unsigned long long)whichEvent_Type;
@end

