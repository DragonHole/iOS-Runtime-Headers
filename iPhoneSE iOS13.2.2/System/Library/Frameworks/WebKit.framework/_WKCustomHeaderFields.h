/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSDictionary, NSArray, NSString;

@interface _WKCustomHeaderFields : NSObject <WKObject> {

	ObjectStorage<API::CustomHeaderFields> _fields;

}

@property (nonatomic,copy) NSDictionary * fields; 
@property (nonatomic,copy) NSArray * thirdPartyDomains; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)init;
-(void)dealloc;
-(NSDictionary *)fields;
-(Object*)_apiObject;
-(void)setFields:(NSDictionary *)arg1 ;
-(NSArray *)thirdPartyDomains;
-(void)setThirdPartyDomains:(NSArray *)arg1 ;
@end

