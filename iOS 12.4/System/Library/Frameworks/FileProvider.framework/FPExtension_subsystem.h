/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSDictionary, NSString;

@interface FPExtension_subsystem : NSObject <PKModularService> {

	BOOL _initialized;
	NSDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSDictionary * infoDictionary;              //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initForPlugInKit;
+(id)sharedInstance;
-(void)endUsing:(id)arg1 ;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
-(NSDictionary *)infoDictionary;
@end

