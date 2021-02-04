/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKDynamicProvisioningPageLearnMoreContent : NSObject <NSCopying> {

	NSString* _buttonTitle;
	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _bussinessChatButtonTitle;
	NSString* _bussinesChatIntentName;

}

@property (nonatomic,copy) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * body;                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * bussinessChatButtonTitle;              //@synthesize bussinessChatButtonTitle=_bussinessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * bussinesChatIntentName;                //@synthesize bussinesChatIntentName=_bussinesChatIntentName - In the implementation block
-(id)initWithDictonary:(id)arg1 ;
-(void)setBussinessChatButtonTitle:(NSString *)arg1 ;
-(void)setBussinesChatIntentName:(NSString *)arg1 ;
-(NSString *)bussinesChatIntentName;
-(NSString *)bussinessChatButtonTitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
@end
