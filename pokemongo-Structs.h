/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:59 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	char* field1;
	char* field2;
	long long field3;
	long long field4;
	long long field5;
	BOOL field6;
	BOOL field7;
} SCD_Struct_Ke3;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CMVideoSampling {
	void cvTextureCache;
	void cvTextureCacheTexture;
	void cvImageBuffer;
} CMVideoSampling;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_Vi6;

typedef struct RenderingSurfaceParams* RenderingSurfaceParamsRef;

typedef struct _darwin_sigaltstack {
	void ss_sp;
	unsigned long long ss_size;
	int ss_flags;
} darwin_sigaltstack;

typedef struct __CFUUID* CFUUIDRef;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct PLCrashHostInfoVersion {
	unsigned long long major;
	unsigned long long minor;
	unsigned long long revision;
} PLCrashHostInfoVersion;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_Un12;

typedef struct plcrash_mach_exception_port_set {
	unsigned count;
	unsigned masks[14];
	unsigned ports[14];
	int behaviors[14];
	int flavors[14];
} plcrash_mach_exception_port_set;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct _NSZone* NSZoneRef;

typedef struct shared_ptr<nia::game::iap::ios::IosBillingDelegate> {
	IosBillingDelegate __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<nia::game::iap::ios::IosBillingDelegate>;

typedef struct InternalMetadataWithArena {
	void ptr_;
} InternalMetadataWithArena;

typedef struct Activity {
	/*function pointer*/void* _vptr$MessageLite;
	InternalMetadataWithArena _internal_metadata_;
	BOOL _is_default_instance_;
	long long start_time_ms_;
	int unknown_;
	int walking_;
	int running_;
	int stationary_;
	int automotive_;
	int tilting_;
	int cycling_;
	int status_;
	int _cached_size_;
} Activity;

typedef struct ArenaStringPtr {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > ptr_;
} ArenaStringPtr;

typedef struct LocationUpdate {
	/*function pointer*/void* _vptr$MessageLite;
	InternalMetadataWithArena _internal_metadata_;
	BOOL _is_default_instance_;
	ArenaStringPtr name_;
	long long timestamp_ms_;
	float altitude_;
	float latitude_;
	float longitude_;
	float device_speed_;
	float device_course_;
	float horizontal_accuracy_;
	float vertical_accuracy_;
	int provider_status_;
	long long floor_;
	int location_type_;
	int _cached_size_;
} LocationUpdate;

typedef struct LocationParameters {
	BOOL run_in_background;
	double desired_location_accuracy_m;
	int gps_update_time_ms;
	int net_update_time_ms;
	double min_update_distance_m;
} LocationParameters;

typedef struct SensorUpdate {
	/*function pointer*/void* _vptr$MessageLite;
	InternalMetadataWithArena _internal_metadata_;
	BOOL _is_default_instance_;
	long long timestamp_;
	double acceleration_x_;
	double acceleration_y_;
	double acceleration_z_;
	double magnetic_field_x_;
	double magnetic_field_y_;
	double magnetic_field_z_;
	double attitude_pitch_;
	double attitude_yaw_;
	double attitude_roll_;
	double rotation_rate_x_;
	double rotation_rate_y_;
	int magnetic_field_accuracy_;
	int status_;
	double rotation_rate_z_;
	double gravity_x_;
	double gravity_y_;
	double gravity_z_;
	int _cached_size_;
} SensorUpdate;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct dispatch_group_s* dispatch_group_sRef;

typedef struct __SecKey* SecKeyRef;

