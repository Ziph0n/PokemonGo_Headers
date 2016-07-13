/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRRequestState : NSObject {

	double _timestamp;
	NSString* _url;
	NSString* _method;
	NSString* _errorString;
	long long _activeNetwork;
	double _latency;
	long long _errorType;
	long long _responseCode;
	unsigned long long _bytesSent;
	unsigned long long _bytesRead;
	double _latitude;
	double _longitude;
	NSString* _MIMEType;

}

@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * method;                           //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSString * errorString;                      //@synthesize errorString=_errorString - In the implementation block
@property (assign,nonatomic) long long activeNetwork;                   //@synthesize activeNetwork=_activeNetwork - In the implementation block
@property (assign,nonatomic) double latency;                            //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) long long errorType;                       //@synthesize errorType=_errorType - In the implementation block
@property (assign,nonatomic) long long responseCode;                    //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;              //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesRead;              //@synthesize bytesRead=_bytesRead - In the implementation block
@property (assign,nonatomic) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                         //@synthesize MIMEType=_MIMEType - In the implementation block
+(long long)connectionErrorType:(id)arg1 ;
-(void)setErrorString:(NSString *)arg1 ;
-(long long)activeNetwork;
-(void)setMIMEType:(NSString *)arg1 ;
-(id)makeArrayUsingDefault:(id)arg1 ;
-(void)sentRequestAt:(double)arg1 ;
-(void)initialResponseReceivedAt:(double)arg1 ;
-(void)setResponseCodeForResponse:(id)arg1 ;
-(void)onReceivedData:(unsigned long long)arg1 ;
-(void)connectionFailedWithError:(id)arg1 ;
-(id)jsonArray;
-(id)plistSafeArray;
-(void)setActiveNetwork:(long long)arg1 ;
-(long long)errorType;
-(void)setErrorType:(long long)arg1 ;
-(void)setBytesRead:(unsigned long long)arg1 ;
-(long long)responseCode;
-(double)latitude;
-(double)longitude;
-(id)init;
-(double)timestamp;
-(NSString *)url;
-(void)setTimestamp:(double)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)MIMEType;
-(NSString *)method;
-(id)initWithRequest:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setResponseCode:(long long)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(unsigned long long)bytesRead;
-(double)latency;
-(void)setLatency:(double)arg1 ;
-(NSString *)errorString;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
@end
