/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSURLRequest, AMSMetricsEvent, NSDictionary;

@interface AMSUserNotificationAction : NSObject {

	NSString* _identifier;
	NSURL* _defaultURL;
	NSString* _title;
	NSURLRequest* _request;
	AMSMetricsEvent* _metricsEvent;
	NSDictionary* _userInfo;
	long long _style;

}

@property (nonatomic,readonly) unsigned long long un_ActionOptions; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * defaultURL;                                 //@synthesize defaultURL=_defaultURL - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) AMSMetricsEvent * metricsEvent;                     //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                            //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(void)setDefaultURL:(NSURL *)arg1 ;
-(NSURL *)defaultURL;
-(unsigned long long)un_ActionOptions;
-(AMSMetricsEvent *)metricsEvent;
-(id)generateUserInfoAction;
-(id)initWithUserInfoAction:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 ;
-(NSURLRequest *)request;
@end
