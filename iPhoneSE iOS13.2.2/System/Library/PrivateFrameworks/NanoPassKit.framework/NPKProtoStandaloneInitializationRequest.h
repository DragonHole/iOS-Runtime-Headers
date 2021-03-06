/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneRequestHeader;

@interface NPKProtoStandaloneInitializationRequest : PBRequest <NSCopying> {

	NPKProtoStandaloneRequestHeader* _requestHeader;
	BOOL _separateLocalDeviceEntryRequired;
	BOOL _useSimulatedFlowController;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;              //@synthesize requestHeader=_requestHeader - In the implementation block
@property (assign,nonatomic) BOOL hasUseSimulatedFlowController; 
@property (assign,nonatomic) BOOL useSimulatedFlowController;                              //@synthesize useSimulatedFlowController=_useSimulatedFlowController - In the implementation block
@property (assign,nonatomic) BOOL hasSeparateLocalDeviceEntryRequired; 
@property (assign,nonatomic) BOOL separateLocalDeviceEntryRequired;                        //@synthesize separateLocalDeviceEntryRequired=_separateLocalDeviceEntryRequired - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)setSeparateLocalDeviceEntryRequired:(BOOL)arg1 ;
-(BOOL)useSimulatedFlowController;
-(BOOL)separateLocalDeviceEntryRequired;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(void)setUseSimulatedFlowController:(BOOL)arg1 ;
-(void)setHasUseSimulatedFlowController:(BOOL)arg1 ;
-(BOOL)hasUseSimulatedFlowController;
-(void)setHasSeparateLocalDeviceEntryRequired:(BOOL)arg1 ;
-(BOOL)hasSeparateLocalDeviceEntryRequired;
@end

