/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FMFPlacemark : NSObject <NSCopying, NSSecureCoding> {

	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _country;
	NSString* _state;
	NSString* _streetAddress;
	NSString* _streetName;
	NSArray* _formattedAddressLines;

}

@property (nonatomic,retain) NSArray * formattedAddressLines;              //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,retain) NSString * locality;                          //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,retain) NSString * country;                           //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * streetAddress;                     //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,retain) NSString * streetName;                        //@synthesize streetName=_streetName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)formattedAddressLines;
-(void)setFormattedAddressLines:(NSArray *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)locality;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(void)setStreetAddress:(NSString *)arg1 ;
-(NSString *)streetAddress;
-(id)dictionaryValue;
-(id)formattedAddress;
-(void)setStreetName:(NSString *)arg1 ;
-(NSString *)streetName;
-(id)initWithLocality:(id)arg1 administrativeArea:(id)arg2 country:(id)arg3 state:(id)arg4 streetAddress:(id)arg5 streetName:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

