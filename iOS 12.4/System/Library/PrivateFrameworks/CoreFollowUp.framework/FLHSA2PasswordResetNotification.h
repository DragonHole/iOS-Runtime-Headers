/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FLHSA2PasswordResetNotification : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _informativeText;
	NSString* _approveButtonTitle;
	NSString* _dismissButtonTitle;
	NSString* _appleID;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                 //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy) NSString * approveButtonTitle;              //@synthesize approveButtonTitle=_approveButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;              //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * appleID;                         //@synthesize appleID=_appleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInformativeText:(NSString *)arg1 ;
-(NSString *)appleID;
-(id)initWithFollowUpItemUserInfo:(id)arg1 ;
-(id)followUpItemUserInfo;
-(NSString *)approveButtonTitle;
-(void)setApproveButtonTitle:(NSString *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)informativeText;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

