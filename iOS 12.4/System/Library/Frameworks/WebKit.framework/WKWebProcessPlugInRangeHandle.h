/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInRangeHandle : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleRangeHandle> _rangeHandle;

}

@property (readonly) InjectedBundleRangeHandle* _rangeHandle; 
@property (nonatomic,readonly) WKWebProcessPlugInFrame * frame; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)rangeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(Object*)_apiObject;
-(InjectedBundleRangeHandle*)_rangeHandle;
-(id)detectDataWithTypes:(unsigned long long)arg1 context:(id)arg2 ;
-(void)dealloc;
-(NSString *)text;
-(WKWebProcessPlugInFrame *)frame;
@end

