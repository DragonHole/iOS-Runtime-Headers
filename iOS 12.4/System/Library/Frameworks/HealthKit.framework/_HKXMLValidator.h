/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@interface _HKXMLValidator : NSObject {

	xmlSchemaRef _xsdSchema;

}
-(id)initWithXSD:(id)arg1 ;
-(id)initWithPathToXSD:(id)arg1 ;
-(BOOL)validateXML:(id)arg1 simpleError:(id*)arg2 detailedErrors:(id*)arg3 ;
-(void)dealloc;
@end
