/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SidecarCore/SidecarCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, RPStreamSession, SidecarSession;

@interface SidecarStream : NSObject <NSSecureCoding> {

	NSString* _identifier;
	RPStreamSession* _rapportStream;
	/*^block*/id _handler;
	SidecarSession* _session;
	unsigned long long _status;
	AB _activated;

}

@property (readonly) RPStreamSession * rapportStream; 
@property (readonly) SidecarSession * session; 
@property (nonatomic,readonly) long long transport; 
@property (nonatomic,readonly) SCD_Struct_Si3 nwClientID; 
@property (readonly) unsigned long long status;                        //@synthesize status=_status - In the implementation block
@property (readonly) long long fileDescriptor; 
@property (readonly) NSString * identifier; 
@property (readonly) long long type; 
@property (readonly) unsigned long long flags; 
@property (copy) id handler; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)handler;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)flags;
-(void)setHandler:(id)arg1 ;
-(long long)fileDescriptor;
-(unsigned long long)status;
-(SidecarSession *)session;
-(long long)transport;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(SCD_Struct_Si3)nwClientID;
-(id)initWithIdentifier:(id)arg1 rapportStream:(id)arg2 ;
-(RPStreamSession *)rapportStream;
-(void)sendOPACK:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

