/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NUAssertionInfo : NSObject {

	BOOL _isClassMethod;
	BOOL _isFatal;
	SEL _selector;
	Class _objectClass;
	NSString* _functionName;
	NSString* _fileName;
	unsigned long long _lineNumber;
	NSString* _message;

}

@property (assign) SEL selector;                               //@synthesize selector=_selector - In the implementation block
@property (retain) Class objectClass;                          //@synthesize objectClass=_objectClass - In the implementation block
@property (assign) BOOL isClassMethod;                         //@synthesize isClassMethod=_isClassMethod - In the implementation block
@property (retain) NSString * functionName;                    //@synthesize functionName=_functionName - In the implementation block
@property (retain) NSString * fileName;                        //@synthesize fileName=_fileName - In the implementation block
@property (assign) unsigned long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (retain) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (assign) BOOL isFatal;                               //@synthesize isFatal=_isFatal - In the implementation block
-(void)setLineNumber:(unsigned long long)arg1 ;
-(unsigned long long)lineNumber;
-(void)setObjectClass:(Class)arg1 ;
-(void)setIsClassMethod:(BOOL)arg1 ;
-(void)setIsFatal:(BOOL)arg1 ;
-(BOOL)isClassMethod;
-(id)prettyMethodName;
-(BOOL)isFatal;
-(BOOL)isWarning;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(Class)objectClass;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
-(id)description;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

