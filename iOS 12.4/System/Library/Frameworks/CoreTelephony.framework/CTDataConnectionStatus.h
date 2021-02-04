/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _suspended;
	BOOL _publicNetAllowed;
	unsigned _wirelessTechnologyMask;
	int _state;
	int _ipFamily;
	int _contextType;
	NSNumber* _pdp;
	NSString* _interfaceName;
	NSString* _apnName;

}

@property (nonatomic,retain) NSNumber * pdp;                               //@synthesize pdp=_pdp - In the implementation block
@property (nonatomic,retain) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSString * apnName;                           //@synthesize apnName=_apnName - In the implementation block
@property (assign,nonatomic) unsigned wirelessTechnologyMask;              //@synthesize wirelessTechnologyMask=_wirelessTechnologyMask - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int ipFamily;                                 //@synthesize ipFamily=_ipFamily - In the implementation block
@property (assign,nonatomic) BOOL suspended;                               //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL publicNetAllowed;                        //@synthesize publicNetAllowed=_publicNetAllowed - In the implementation block
@property (assign,nonatomic) int contextType;                              //@synthesize contextType=_contextType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPdp:(NSNumber *)arg1 ;
-(void)setWirelessTechnologyMask:(unsigned)arg1 ;
-(void)setIpFamily:(int)arg1 ;
-(void)setPublicNetAllowed:(BOOL)arg1 ;
-(void)setApnName:(NSString *)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setContextType:(int)arg1 ;
-(int)contextType;
-(BOOL)suspended;
-(NSNumber *)pdp;
-(NSString *)apnName;
-(unsigned)wirelessTechnologyMask;
-(int)ipFamily;
-(BOOL)publicNetAllowed;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(int)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
@end
