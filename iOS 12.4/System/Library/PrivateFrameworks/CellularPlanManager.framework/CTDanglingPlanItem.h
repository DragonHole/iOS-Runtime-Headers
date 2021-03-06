/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTUserLabel;

@interface CTDanglingPlanItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _iccid;
	NSString* _phoneNumber;
	NSString* _simLabelID;
	CTUserLabel* _userLabel;

}

@property (nonatomic,retain) NSString * iccid;                     //@synthesize iccid=_iccid - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * simLabelID;                //@synthesize simLabelID=_simLabelID - In the implementation block
@property (nonatomic,retain) CTUserLabel * userLabel;              //@synthesize userLabel=_userLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)simLabelID;
-(void)setUserLabel:(CTUserLabel *)arg1 ;
-(void)setSimLabelID:(NSString *)arg1 ;
-(id)initWithIccid:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3 labelID:(id)arg4 ;
-(CTUserLabel *)userLabel;
-(NSString *)iccid;
-(void)setIccid:(NSString *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
@end

